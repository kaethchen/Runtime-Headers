@class NSString, NSMutableString;

@interface PFStateCaptureEventDescription : NSObject {
    NSMutableString *_description;
}

@property (readonly, nonatomic) double startTimestamp;
@property (readonly, copy) NSString *description;

- (void).cxx_destruct;
- (id)appendString:(id)a0;
- (id)appendBool:(BOOL)a0;
- (id)appendInteger:(long long)a0;
- (id)appendUnsignedInteger:(unsigned long long)a0;
- (id)appendDuration:(double)a0;
- (id)appendThreadID:(unsigned long long)a0;
- (id)appendQoSClass:(unsigned int)a0;
- (id)appendAbsoluteTimestamp:(double)a0;
- (id)appendEndTimestamp:(double)a0;
- (id)appendRelativeTimestamp:(double)a0;
- (id)appendUInt64:(unsigned long long)a0;
- (id)initWithStartTimestamp:(double)a0;

@end
