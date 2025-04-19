@class NSString, NSArray, NSDate;

@interface _AMSystemEventsTrack : SBObject <_AMSystemEventsGenericMethods>

@property (readonly) long long audioChannelCount;
@property (readonly) BOOL audioCharacteristic;
@property (readonly) double audioSampleRate;
@property (readonly) long long audioSampleSize;
@property (readonly, copy) NSDate *creationTime;
@property (readonly, copy) NSString *dataFormat;
@property (readonly) long long dataRate;
@property (readonly) long long dataSize;
@property (readonly, copy) NSArray *dimensions;
@property (readonly) long long duration;
@property BOOL enabled;
@property BOOL highQuality;
@property (readonly, copy) NSString *href;
@property (readonly, copy) NSString *kind;
@property (readonly, copy) NSDate *modificationTime;
@property (readonly, copy) NSString *name;
@property long long startTime;
@property (readonly, copy) NSString *type;
@property (readonly, copy) NSString *typeClass;
@property (readonly) long long videoDepth;
@property (readonly) BOOL visualCharacteristic;

- (void)delete;
- (void)moveTo:(id)a0;
- (id)annotations;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
