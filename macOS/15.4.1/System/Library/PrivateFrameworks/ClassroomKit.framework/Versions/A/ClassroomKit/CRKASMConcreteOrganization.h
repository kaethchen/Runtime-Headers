@class NSUUID, NSString;

@interface CRKASMConcreteOrganization : NSObject <CRKASMOrganization>

@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 name:(id)a1;

@end
