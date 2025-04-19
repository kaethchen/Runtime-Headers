@class NSString;

@interface PXSharedAlbumsActivityEntryAvatarConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *email;
@property (readonly, copy, nonatomic) NSString *phone;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *lastName;

- (void).cxx_destruct;
- (id)initWithEmail:(id)a0 phone:(id)a1 firstName:(id)a2 lastName:(id)a3;

@end
