@interface IKMetadataHandler : NSObject

+ (id)sharedMetadataHandler;

- (void)forInfoKey:(id)a0 addKey:(id)a1 fromDictionary:(id)a2 toArray:(id)a3;
- (id)localizedDate:(id)a0 format:(id)a1;
- (id)localizedDateTime:(id)a0;
- (id)localizedTime:(id)a0 format:(id)a1 useUTC:(BOOL)a2;
- (id)processMetaData:(id)a0;
- (id)processSubInfo:(id)a0 forKey:(id)a1;
- (id)stringForGPSValue:(double)a0 isLongitude:(BOOL)a1;

@end
