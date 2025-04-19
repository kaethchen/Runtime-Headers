@class HMDVendorModelEntry, NSMutableSet;

@interface HMDVendorModelCollection : HMFObject

@property (readonly, nonatomic) NSMutableSet *entries;
@property (retain, nonatomic) HMDVendorModelEntry *defaultEntry;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addEntry:(id)a0;
- (id)attributeDescriptions;
- (id)lookupModel:(id)a0;
- (id)lookupProductData:(id)a0;

@end
