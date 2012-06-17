#import <UIKit/UIKit.h>
#import "AFPickerView.h"

@interface ViewController : UIViewController <AFPickerViewDataSource, AFPickerViewDelegate>
{
    AFPickerView *defaultPickerView;
    NSArray *daysData;
}

@property (strong, nonatomic) IBOutlet UILabel *numberLabel;
@property (strong, nonatomic) IBOutlet UILabel *dayLabel;

@end
