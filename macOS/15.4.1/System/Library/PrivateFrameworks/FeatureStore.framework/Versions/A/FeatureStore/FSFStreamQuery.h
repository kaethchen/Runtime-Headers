@class NSArray, NSString, NSDate;

@interface FSFStreamQuery : NSObject <FSFStreamQueryProtocol> {
    void /* unknown type, empty encoding */ startDate;
    void /* unknown type, empty encoding */ endDate;
    void /* unknown type, empty encoding */ interactionIds;
    void /* unknown type, empty encoding */ taskId;
}

@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) NSArray *interactionIds;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
