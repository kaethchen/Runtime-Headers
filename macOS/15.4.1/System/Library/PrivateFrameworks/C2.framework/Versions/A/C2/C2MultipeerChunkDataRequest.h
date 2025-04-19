@class NSUUID;

@interface C2MultipeerChunkDataRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *requestUUID;
@property (nonatomic) BOOL chunkDataRequested;
@property (copy, nonatomic) id /* block */ chunkDataCallback;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
