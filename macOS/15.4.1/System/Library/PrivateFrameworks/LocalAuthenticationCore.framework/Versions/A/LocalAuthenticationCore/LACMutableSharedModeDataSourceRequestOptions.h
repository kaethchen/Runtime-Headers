@class NSString;

@interface LACMutableSharedModeDataSourceRequestOptions : NSObject <LACSharedModeDataSourceRequestOptions>

@property (nonatomic) BOOL isPreflight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;

@end
