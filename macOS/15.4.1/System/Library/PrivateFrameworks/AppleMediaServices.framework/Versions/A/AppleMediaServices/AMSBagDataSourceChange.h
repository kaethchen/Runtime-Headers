@class NSString, NSDictionary, NSSet, NSDate;

@interface AMSBagDataSourceChange : NSObject

@property (readonly) NSString *accountIdentifier;
@property (readonly) NSString *loadedBagIdentifier;
@property (readonly) NSString *loadedBagPartialIdentifier;
@property (readonly) NSDictionary *originalData;
@property (readonly) NSDate *originalExpirationDate;
@property (readonly) NSString *profile;
@property (readonly) NSString *profileVersion;
@property (readonly) NSDictionary *updatedData;
@property (readonly) NSDate *updatedExpirationDate;
@property (readonly) NSSet *changedKeys;

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 profileVersion:(id)a1 originalData:(id)a2 originalExpirationDate:(id)a3 updatedData:(id)a4 updatedExpirationDate:(id)a5 changedKeys:(id)a6 loadedBagIdentifier:(id)a7 loadedBagPartialIdentifier:(id)a8 accountIdentifier:(id)a9;

@end
