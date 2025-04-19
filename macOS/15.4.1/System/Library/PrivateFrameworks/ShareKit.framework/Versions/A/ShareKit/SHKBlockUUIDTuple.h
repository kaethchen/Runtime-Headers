@class NSUUID;

@interface SHKBlockUUIDTuple : NSObject

@property (readonly, copy) id /* block */ block;
@property (readonly) NSUUID *uuid;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0 UUID:(id)a1;

@end
