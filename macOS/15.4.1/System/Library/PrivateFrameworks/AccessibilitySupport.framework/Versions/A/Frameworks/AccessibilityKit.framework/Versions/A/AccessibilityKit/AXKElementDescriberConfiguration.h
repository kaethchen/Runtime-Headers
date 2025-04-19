@class NSString, NSMutableSet;

@interface AXKElementDescriberConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableSet *_attributesToInclude;
@property (retain, nonatomic) NSMutableSet *_attributesToExclude;
@property (retain, nonatomic) NSMutableSet *_roleDescriptionToInclude;
@property (retain, nonatomic) NSMutableSet *_roleDescriptionToExclude;
@property (nonatomic) unsigned long long markupsToInclude;
@property (copy, nonatomic) NSString *customPauseString;
@property (nonatomic) BOOL shouldDescribeEmptyElementWithRoleDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)excludeRoleDescriptionForRoles:(id)a0;
- (void)includeRoleDescriptionForRoles:(id)a0;
- (void)excludeAttribute:(id)a0;
- (void)excludeMarkup:(unsigned long long)a0;
- (void)includeAttribute:(id)a0;
- (void)includeMarkup:(unsigned long long)a0;
- (BOOL)isAttributeIncluded:(id)a0;
- (BOOL)isMarkupIncluded:(unsigned long long)a0;
- (BOOL)isRoleDescriptionIncludedForRole:(id)a0;

@end
