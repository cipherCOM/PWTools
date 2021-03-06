//
//  NSThread-PWExtensions.h
//  PWFoundation
//
//  Created by Kai Brüning on 29.3.11.
//
//

#import <Foundation/Foundation.h>

typedef enum PWCallStackVerbosity {
    PWCallStackEverything,
    PWCallStackExcludeTestSetup     // exclude the bottom of the stack as generated by unit tests
} PWCallStackVerbosity;

@interface NSThread (PWExtensions)

// Write out current call stack using PWLog.
// Based on +[NSthread callStackSymbols] (new in 10.6).
+ (void) dumCallStackWithVerbosity:(PWCallStackVerbosity)verbosity;

+ (NSArray<NSString*>*)callStackSymbolsFromReturnAddresses:(NSArray<NSNumber*>*)callStack;
@end
