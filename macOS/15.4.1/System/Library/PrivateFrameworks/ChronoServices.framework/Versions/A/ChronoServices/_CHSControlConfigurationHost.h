@class NSString, NSArray;

@interface _CHSControlConfigurationHost : NSObject <CHSControlConfigurationHost_Internal> {
    NSString *_identifier;
    NSArray *_configurations;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *controlConfigurations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
