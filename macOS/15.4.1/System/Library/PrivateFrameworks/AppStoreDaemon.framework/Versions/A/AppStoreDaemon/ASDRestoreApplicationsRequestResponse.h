@class NSArray;

@interface ASDRestoreApplicationsRequestResponse : ASDRequestResponse {
    BOOL success;
}

@property (readonly, nonatomic) NSArray *results;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)success;
- (id)initWithResults:(id)a0;

@end
