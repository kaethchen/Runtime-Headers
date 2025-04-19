@class NSInvocation, NSArray, NSString, NSAppleEventDescriptor, NSAppleEventHandling, NSMutableArray;

@interface NSScriptCommandMoreIVars : NSObject {
    NSAppleEventHandling *appleEventHandling;
    NSArray *flattenedReceivers;
    unsigned long long nextReceiverIndex;
    NSMutableArray *collectedResults;
    Class cachedHanderInvocationReceiverClass;
    NSInvocation *cachedHandlerInvocation;
    int errorNumber;
    NSString *errorString;
    NSAppleEventDescriptor *errorOffendingObjectDescriptor;
    NSAppleEventDescriptor *errorExpectedTypeDescriptor;
}

@end
