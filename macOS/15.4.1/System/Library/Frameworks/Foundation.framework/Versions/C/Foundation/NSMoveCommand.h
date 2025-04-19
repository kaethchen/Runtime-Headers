@class NSScriptObjectSpecifier;

@interface NSMoveCommand : NSScriptCommand {
    NSScriptObjectSpecifier *_keySpecifier;
}

@property (readonly, retain) NSScriptObjectSpecifier *keySpecifier;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_moveObjectInContainer:(id)a0 withKey:(id)a1 atIndex:(long long)a2 toContainer:(id)a3 withKey:(id)a4 atIndex:(long long *)a5 replace:(BOOL)a6;
- (void)_moveObjectsInContainer:(id)a0 toContainer:(id)a1 withKey:(id)a2 atIndex:(long long *)a3 replace:(BOOL)a4;
- (id)performDefaultImplementation;
- (void)setReceiversSpecifier:(id)a0;

@end
