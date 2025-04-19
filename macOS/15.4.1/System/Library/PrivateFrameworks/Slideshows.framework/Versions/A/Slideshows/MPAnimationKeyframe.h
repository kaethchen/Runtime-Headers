@class MCAnimationKeyframe, NSMutableDictionary, MPAnimationPath;

@interface MPAnimationKeyframe : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_attributes;
    MPAnimationPath *_parentPath;
    MCAnimationKeyframe *_keyframe;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double time;
@property (nonatomic) unsigned long long offsetType;
@property (nonatomic) double preControl;
@property (nonatomic) double postControl;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectSpecifier;
- (void)dump;
- (void)setKeyframe:(id)a0;
- (id)parentPath;
- (id)parentDocument;
- (void)copyVars:(id)a0;
- (id)fullDebugLog;
- (long long)relativeTimeCompare:(id)a0;
- (void)setParentPath:(id)a0;

@end
