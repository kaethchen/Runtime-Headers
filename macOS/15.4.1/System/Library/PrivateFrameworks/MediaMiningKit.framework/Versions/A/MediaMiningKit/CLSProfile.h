@class NSString;

@interface CLSProfile : NSObject

@property (readonly, copy, nonatomic) NSString *uuid;

+ (id)identifier;
+ (id)classIdentifier;
+ (id)informantDependenciesIdentifiers;
+ (id)profileDependenciesIdentifiers;
+ (id)supportedMeaningClueKeys;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (void)processResultsSynchronouslyForInvestigation:(id)a0 withProgressBlock:(id /* block */)a1;

@end
