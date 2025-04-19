@class NSString, SRCursor;
@protocol SRRequestReading;

@interface SRReaderFetchRequest : NSObject <SRRequestFetching> {
    id<SRRequestReading> _readerRequest;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *sensor;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property double from;
@property double to;
@property BOOL bypassHoldingPeriod;
@property (retain, nonatomic) SRCursor *cursor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
