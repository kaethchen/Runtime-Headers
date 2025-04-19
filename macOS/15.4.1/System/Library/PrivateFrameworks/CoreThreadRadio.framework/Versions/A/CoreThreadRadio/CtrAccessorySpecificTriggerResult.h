@class NSString;

@interface CtrAccessorySpecificTriggerResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *ip_addr;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long tx_total;
@property (readonly, nonatomic) long long tx_total_success;
@property (readonly, nonatomic) long long rx_total;
@property (readonly, nonatomic) long long rx_total_success;
@property (readonly, nonatomic) long long tx_icmp_total;
@property (readonly, nonatomic) long long rx_icmp_total;
@property (readonly, nonatomic) NSString *last_known_role;
@property (readonly, nonatomic) BOOL is_current_node_parent;
@property (readonly, nonatomic) BOOL is_link_loss_detected;
@property (readonly, nonatomic) BOOL is_neighbor_table_removal_detected;
@property (readonly, nonatomic) BOOL is_direct_link;
@property (readonly, nonatomic) long long avg_rssi;
@property (readonly, nonatomic) long long tx_success_perc;
@property (readonly, nonatomic) long long rx_success_perc;
@property (readonly, nonatomic) long long tx_delayavg;
@property (readonly, nonatomic) long long tx_delaymin;
@property (readonly, nonatomic) long long tx_delaymax;


- (void).cxx_destruct;
- (id)initWithAccessoryData:(id)a0 ip_addr:(id)a1 tx_total:(long long)a2 tx_total_success:(long long)a3 rx_total:(long long)a4 rx_total_success:(long long)a5 tx_icmp_total:(long long)a6 rx_icmp_total:(long long)a7 last_known_role:(id)a8 is_current_node_parent:(BOOL)a9 is_link_loss_detected:(BOOL)a10 is_neighbor_table_removal_detected:(BOOL)a11 is_direct_link:(BOOL)a12 avg_rssi:(long long)a13 tx_success_perc:(long long)a14 rx_success_perc:(long long)a15 tx_delayavg:(long long)a16 tx_delaymin:(long long)a17 tx_delaymax:(long long)a18;

@end
