@class NSString;

@interface DownloadsDialogConfiguration : AlertDialogConfiguration

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSString *parentDomain;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (long long)dialogType;
- (id)initWithDomain:(id)a0 parentDomain:(id)a1 originStringForAccessibility:(id)a2;

@end
