@class NSSet, NSString;

@interface EMFocus : NSObject <EFPubliclyDescribable>

@property (readonly, copy, nonatomic) NSSet *focusedAccountIdentifiers;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
