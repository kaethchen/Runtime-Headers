@class NSString, GEOLocation, NSArray, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface GEOGeographicMetadataTileFetcher : NSObject <GEOGeographicMetadataFetcher> {
    NSObject<OS_dispatch_queue> *_workQueue;
    GEOLocation *_location;
    unsigned long long _options;
    NSArray *_tileDatas;
    NSMapTable *_resultItems;
}

@property (readonly, nonatomic) int tileStyle;
@property (readonly, nonatomic) unsigned short mcc;
@property (readonly, nonatomic) unsigned short mnc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)fetchMetadataForLocation:(id)a0 responseQueue:(id)a1 block:(id /* block */)a2;
- (id)initForTileStyle:(int)a0 mcc:(unsigned short)a1 mnc:(unsigned short)a2 options:(unsigned long long)a3;
- (id)initForTileStyle:(int)a0 options:(unsigned long long)a1;
- (void)reportCorrupt:(id)a0;

@end
