@class NSString;

@interface PhotosGraph.LocationNodeCache : NSObject {
    void /* unknown type, empty encoding */ locationNode;
    void /* unknown type, empty encoding */ momentsAtThisLocation;
    void /* unknown type, empty encoding */ children;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
