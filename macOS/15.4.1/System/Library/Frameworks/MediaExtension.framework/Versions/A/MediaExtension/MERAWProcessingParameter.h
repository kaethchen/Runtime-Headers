@class NSString;

@interface MERAWProcessingParameter : NSObject {
    NSString *_description;
}

@property (readonly) NSString *name;
@property (readonly) NSString *key;
@property (readonly) NSString *longDescription;
@property BOOL enabled;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 key:(id)a1 description:(id)a2 enabled:(BOOL)a3;

@end
