@class NSString, NSDate;

@interface _AMSystemEventsQuickTimeData : SBObject <_AMSystemEventsGenericMethods>

@property (readonly) BOOL autoPlay;
@property (readonly) BOOL autoPresent;
@property (readonly) BOOL autoQuitWhenDone;
@property (readonly, copy) NSDate *creationTime;
@property (readonly) long long dataSize;
@property (readonly) long long duration;
@property (readonly, copy) NSString *href;
@property (readonly) BOOL looping;
@property (readonly, copy) NSDate *modificationTime;
@property (readonly) long long preferredRate;
@property (readonly) long long preferredVolume;
@property (readonly) int presentationMode;
@property (readonly) int presentationSize;
@property (readonly) BOOL storedStream;
@property (readonly) long long timeScale;

- (void)delete;
- (void)moveTo:(id)a0;
- (id)annotations;
- (id)tracks;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
