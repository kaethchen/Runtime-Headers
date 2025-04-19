@interface NSScriptFakeObjectTypeDescription : NSScriptObjectTypeDescription {
    unsigned int _appleEventCode;
}

- (unsigned int)appleEventCode;
- (id)initWithAppleEventCode:(unsigned int)a0;

@end
