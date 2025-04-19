@class NSArray;

@interface RSMarkerSignal : NSObject {
    NSArray *_markers;
}

@property (readonly, nonatomic) NSArray *markers;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
