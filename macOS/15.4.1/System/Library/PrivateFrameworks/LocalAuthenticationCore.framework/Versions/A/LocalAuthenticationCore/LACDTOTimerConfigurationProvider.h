@class NSString;
@protocol LACDTORatchetSEPInterface;

@interface LACDTOTimerConfigurationProvider : NSObject <LACDTOTimerConfigurationProvider> {
    id<LACDTORatchetSEPInterface> _sep;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
