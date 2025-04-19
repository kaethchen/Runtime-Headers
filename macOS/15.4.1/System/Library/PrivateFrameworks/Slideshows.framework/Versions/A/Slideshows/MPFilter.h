@class NSString, NSMutableDictionary, MCFilter, NSObject, MPFilterInternal;
@protocol MPFilterSupport;

@interface MPFilter : NSObject <NSSecureCoding, NSCopying, MPAnimationSupport> {
    NSMutableDictionary *_attributes;
    NSMutableDictionary *_animationPaths;
    MCFilter *_filter;
    NSObject<MPFilterSupport> *_parent;
    MPFilterInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *filterID;
@property (copy, nonatomic) NSString *presetID;

+ (id)filterWithFilterID:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)filter;
- (void)setFilter:(id)a0;
- (long long)index;
- (id)parent;
- (id)objectSpecifier;
- (void)dump;
- (void)setDefaults;
- (void)setParent:(id)a0;
- (id)filterID;
- (id)filterAttributes;
- (id)parentDocument;
- (id)animationPathForKey:(id)a0;
- (id)animationPaths;
- (id)convertMCAttributeToMPAttribute:(id)a0 withKey:(id)a1;
- (id)convertMPAttributeToMCAttribute:(id)a0 withKey:(id)a1;
- (void)copyAnimationPaths:(id)a0;
- (void)copyStruct:(id)a0;
- (id)filterAttributeForKey:(id)a0;
- (id)fullDebugLog;
- (id)initWithFilterID:(id)a0;
- (id)presetID;
- (void)removeAnimationPathForKey:(id)a0;
- (void)setAnimationPath:(id)a0 forKey:(id)a1;
- (void)setFilterAttribute:(id)a0 forKey:(id)a1;
- (void)setFilterID:(id)a0;
- (void)setPresetID:(id)a0;

@end
