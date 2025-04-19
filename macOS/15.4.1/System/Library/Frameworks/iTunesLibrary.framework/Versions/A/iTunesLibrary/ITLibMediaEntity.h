@class NSString, NSMutableDictionary, NSNumber, ITLibArtwork;
@protocol ITLibMediaEntityDelegate;

@interface ITLibMediaEntity : NSObject {
    NSMutableDictionary *_fields;
}

@property (retain, nonatomic) NSNumber *persistentID;
@property (retain, nonatomic) NSString *artworkUUID;
@property (nonatomic, getter=hasArtworkAvailable) BOOL artworkAvailable;
@property (retain, nonatomic) ITLibArtwork *artwork;
@property (weak, nonatomic) id<ITLibMediaEntityDelegate> entityDelegate;

- (id)init;
- (void).cxx_destruct;
- (id)valueForProperty:(id)a0;
- (void)enumerateValuesForProperties:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateValuesExceptForProperties:(id)a0 usingBlock:(id /* block */)a1;

@end
