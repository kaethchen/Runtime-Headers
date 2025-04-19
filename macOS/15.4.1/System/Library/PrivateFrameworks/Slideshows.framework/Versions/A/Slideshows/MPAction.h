@class MCAction, NSObject;
@protocol MPActionSupport;

@interface MPAction : NSObject <NSSecureCoding, NSCopying> {
    NSObject<MPActionSupport> *_parentObject;
    MCAction *_action;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject *targetObject;

+ (id)action;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setAction:(id)a0;
- (id)parent;
- (id)key;
- (void)setParent:(id)a0;
- (id)parentDocument;
- (void)configureTarget;

@end
