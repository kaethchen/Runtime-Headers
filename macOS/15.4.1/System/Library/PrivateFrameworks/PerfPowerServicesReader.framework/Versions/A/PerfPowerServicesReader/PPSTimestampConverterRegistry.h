@class NSMutableDictionary;

@interface PPSTimestampConverterRegistry : NSObject

@property (retain) NSMutableDictionary *converters;

+ (id)sharedInstance;
+ (id)converterForFilepath:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
