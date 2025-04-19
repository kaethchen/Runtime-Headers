@class RBProcessMap;

@interface RBCoalition : NSObject {
    unsigned long long _level;
    RBProcessMap *_processes;
    RBProcessMap *_processStates;
}

@property (readonly, nonatomic) unsigned long long coalitionID;
@property (nonatomic) unsigned long long coalitionLevel;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) unsigned long long previousCoalitionLevel;
@property (readonly, nonatomic) double creationTime;
@property (readonly, nonatomic) double lastModificationTime;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)enumerateProcessesUsingBlock:(id /* block */)a0;
- (id)initWithCoalitionID:(unsigned long long)a0;
- (void)removeProcess:(id)a0;
- (void)setProcess:(id)a0 withState:(id)a1;

@end
