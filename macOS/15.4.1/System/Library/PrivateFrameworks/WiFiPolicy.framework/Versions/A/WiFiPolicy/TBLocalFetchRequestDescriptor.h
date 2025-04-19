@class NSFetchRequest;

@interface TBLocalFetchRequestDescriptor : NSObject

@property (retain, nonatomic) NSFetchRequest *localFetchRequest;
@property (readonly, nonatomic) NSFetchRequest *fetchRequest;

- (void).cxx_destruct;
- (id)initWithFetchRequest:(id)a0;

@end
