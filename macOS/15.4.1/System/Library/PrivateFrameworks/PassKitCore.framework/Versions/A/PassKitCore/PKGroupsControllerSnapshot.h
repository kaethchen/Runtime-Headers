@class NSSet, NSDictionary, PKCatalog;

@interface PKGroupsControllerSnapshot : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSet *passes;
@property (readonly, copy, nonatomic) NSDictionary *states;
@property (readonly, copy, nonatomic) NSSet *accounts;
@property (readonly, copy, nonatomic) NSDictionary *annotations;
@property (readonly, copy, nonatomic) NSDictionary *annotationsByPassUniqueID;
@property (readonly, nonatomic) PKCatalog *catalog;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPasses:(id)a0 annotationsByPassUniqueID:(id)a1 accounts:(id)a2 catalog:(id)a3;
- (id)initWithPasses:(id)a0 states:(id)a1 annotations:(id)a2 accounts:(id)a3 catalog:(id)a4;

@end
