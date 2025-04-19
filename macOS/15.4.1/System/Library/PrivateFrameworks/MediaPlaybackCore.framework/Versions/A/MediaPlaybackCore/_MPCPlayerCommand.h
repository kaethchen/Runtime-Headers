@class MPCPlayerResponse, MPCPlayerPath;

@interface _MPCPlayerCommand : NSObject

@property (readonly, nonatomic) MPCPlayerResponse *response;
@property (readonly, copy, nonatomic) MPCPlayerPath *playerPath;

- (void).cxx_destruct;
- (id)initWithResponse:(id)a0;
- (id)initWithPlayerPath:(id)a0;

@end
