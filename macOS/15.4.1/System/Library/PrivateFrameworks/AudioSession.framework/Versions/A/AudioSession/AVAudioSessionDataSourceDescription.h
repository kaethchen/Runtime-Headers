@class NSNumber, NSString, NSArray;

@interface AVAudioSessionDataSourceDescription : NSObject {
    void *_impl;
}

@property (readonly) NSNumber *dataSourceID;
@property (readonly) NSString *dataSourceName;
@property (readonly) NSString *location;
@property (readonly) NSString *orientation;
@property (readonly) NSArray *supportedPolarPatterns;
@property (readonly) NSString *selectedPolarPattern;
@property (readonly) NSString *preferredPolarPattern;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)setPreferredPolarPattern:(id)a0 error:(id *)a1;
- (BOOL)isEqualToDataSource:(id)a0;

@end
