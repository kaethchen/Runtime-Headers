@class NSUUID, NSString;

@interface WBSTabEntity : NSObject

@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *address;
@property (readonly, nonatomic) BOOL isPrivate;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 title:(id)a1 address:(id)a2 isPrivate:(BOOL)a3;

@end
