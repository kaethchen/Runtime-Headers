@class NSString, NSArray, INInformationUseCaseUtterance;

@interface INInformationUseCaseIntent : INIntent

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *infoDomain;
@property (nonatomic, copy) NSString *domainUseCase;
@property (nonatomic, copy) NSArray *parameters;
@property (nonatomic, retain) INInformationUseCaseUtterance *exampleUtterance;
@property (nonatomic, copy) NSString *locale;

- (id)init;
- (id)initWithCoder:(id)a0;

@end
