@class NSString, NSArray, NSObject;

@interface NSScriptEnumeratorDescription : NSObject {
    unsigned int appleEventCode;
    BOOL isHidden;
    NSString *presentableDescription;
    NSString *presentableName;
    NSObject *_value;
    NSArray *_synonymDescriptions;
}

- (void)dealloc;
- (id)value;
- (id)initWithAppleEventCode:(unsigned int)a0 presentableDescription:(id)a1 name:(id)a2;
- (id)initWithAppleEventCode:(unsigned int)a0 value:(id)a1 isHidden:(BOOL)a2 presentableDescription:(id)a3 name:(id)a4 synonymDescriptions:(id)a5;
- (BOOL)matchesAppleEventCode:(unsigned int)a0;
- (id)synonymDescriptions;

@end
