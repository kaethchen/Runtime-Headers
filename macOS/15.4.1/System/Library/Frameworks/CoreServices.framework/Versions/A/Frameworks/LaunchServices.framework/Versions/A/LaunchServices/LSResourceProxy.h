@class NSString, NSDictionary, _LSLazyPropertyList;
@protocol LSIconResourceLocator;

@interface LSResourceProxy : _LSQueryResult <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=_setLocalizedName:) NSString *localizedName;
@property (copy, nonatomic, setter=_setIconsDictionary:) _LSLazyPropertyList *_iconsDictionary;
@property (readonly, nonatomic) id<LSIconResourceLocator> iconResourceLocator;
@property (readonly, nonatomic) BOOL boundIconIsBadge;
@property (readonly, nonatomic) NSDictionary *iconsDictionary;
@property (readonly, nonatomic) NSString *primaryIconName;
@property (nonatomic) unsigned long long propertyListCachingStrategy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)iconDataForVariant:(int)a0 withOptions:(int)a1;
- (id)_initWithLocalizedName:(id)a0;
- (id)iconDataForStyle:(id)a0 width:(long long)a1 height:(long long)a2 options:(unsigned long long)a3;
- (id)iconDataForVariant:(int)a0;
- (id)uniqueIdentifier;

@end
