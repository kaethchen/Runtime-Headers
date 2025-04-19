@class NSString, NSError;

@interface FTWebVTTTranscriptionResult : NSObject

@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL isEmptyCueOut;
@property (copy, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
