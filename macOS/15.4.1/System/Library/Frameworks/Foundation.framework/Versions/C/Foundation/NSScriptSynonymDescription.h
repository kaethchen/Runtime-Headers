@class NSString;

@interface NSScriptSynonymDescription : NSObject {
    NSString *name;
    unsigned int appleEventCode;
    BOOL isHidden;
    unsigned int appleEventClassCode;
}

- (void)dealloc;
- (id)initWithName:(id)a0 appleEventCode:(unsigned int)a1 isHidden:(BOOL)a2 appleEventClassCode:(unsigned int)a3;

@end
