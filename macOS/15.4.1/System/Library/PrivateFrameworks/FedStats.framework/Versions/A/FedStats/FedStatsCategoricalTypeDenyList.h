@class FedStatsSQLiteDenyListDatabase, NSString;

@interface FedStatsCategoricalTypeDenyList : NSObject <FedStatsCategoricalTypeFilteringProtocol>

@property (readonly, copy, nonatomic) FedStatsSQLiteDenyListDatabase *denyListDB;
@property (readonly, nonatomic) BOOL partialMatch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithParameters:(id)a0 error:(id *)a1;
+ (id)mutateParameters:(id)a0 usingFieldValues:(id)a1 assetURLs:(id)a2 requiredFields:(id *)a3 assetNames:(id *)a4 error:(id *)a5;

@end
