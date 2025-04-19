@class NSArray, NSString;

@interface BMMediaRendered : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) NSArray *mediaAttributes;
@property (nonatomic) BOOL hasIsOnScreen;
@property (readonly, nonatomic) BOOL isOnScreen;
@property (nonatomic) BOOL hasIsFirstView;
@property (readonly, nonatomic) BOOL isFirstView;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (id)initWithAbsoluteTimestamp:(double)a0 mediaAttributes:(id)a1 isOnScreen:(BOOL)a2 isFirstView:(BOOL)a3;

@end
