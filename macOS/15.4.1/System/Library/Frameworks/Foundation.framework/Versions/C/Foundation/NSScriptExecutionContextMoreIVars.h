@class NSScriptClassDescription, NSAppleEventDescriptor, NSScriptTypeDescription;

@interface NSScriptExecutionContextMoreIVars : NSObject {
    NSScriptClassDescription *rangeContainerClassDescription;
    NSScriptTypeDescription *testedObjectTypeDescription;
    int errorNumber;
    NSAppleEventDescriptor *errorOffendingObjectDescriptor;
    NSAppleEventDescriptor *errorExpectedTypeDescriptor;
}

@end
