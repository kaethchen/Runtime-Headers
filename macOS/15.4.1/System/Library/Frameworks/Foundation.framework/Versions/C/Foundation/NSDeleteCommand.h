@class NSScriptObjectSpecifier;

@interface NSDeleteCommand : NSScriptCommand {
    NSScriptObjectSpecifier *_keySpecifier;
}

@property (readonly, retain) NSScriptObjectSpecifier *keySpecifier;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)performDefaultImplementation;
- (void)setReceiversSpecifier:(id)a0;

@end
