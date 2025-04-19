@class NSNumber, NSMutableString, NSString;
@protocol CNTimeProvider;

@interface CNAutocompleteStoreReproStringRecorder : NSObject

@property (readonly) id<CNTimeProvider> timeProvider;
@property (readonly) NSMutableString *reproStringStorage;
@property (copy) NSNumber *lastTimestamp;
@property (copy) NSString *lastString;
@property (readonly, copy, nonatomic) NSString *reproString;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (id)initWithTimeProvider:(id)a0;
- (void)recordString:(id)a0;
- (id)stringForIntervalSinceLastTimestamp:(double)a0;
- (id)stringForKeystrokesSinceLastString:(id)a0;

@end
