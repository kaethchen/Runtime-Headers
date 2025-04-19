@class NSDictionary, NSData, NSArray;

@interface CNScriptChanges : NSObject

@property (readonly) NSDictionary *internalChanges;
@property (readonly) NSData *dataRepresentation;
@property (readonly) float fNumber;
@property (readonly) NSArray *userDecisions;
@property (readonly) NSArray *addedDetectionTracks;

+ (id)_changesFromInternal:(id)a0;

- (void).cxx_destruct;
- (id)initWithDataRepresentation:(id)a0;
- (id)_initWithInternalChanges:(id)a0;

@end
