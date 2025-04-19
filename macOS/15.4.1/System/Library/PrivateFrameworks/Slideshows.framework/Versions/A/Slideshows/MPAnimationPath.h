@class MCAnimationPath, NSObject;
@protocol MPAnimationSupport;

@interface MPAnimationPath : NSObject <NSSecureCoding, NSCopying> {
    BOOL _isTriggered;
    NSObject<MPAnimationSupport> *_parentObject;
    MCAnimationPath *_animationPath;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL isTriggered;

+ (id)animationPath;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)cleanup;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)parent;
- (id)key;
- (void)setParent:(id)a0;
- (id)parentDocument;
- (id)animatedKey;
- (id)animatedParent;
- (id)animationPath;
- (void)setAnimationPath:(id)a0;

@end
