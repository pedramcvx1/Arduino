// use TMC4671 API
#include "hal/ic/TMC4671.h"

// Motor type &  PWM configuration
tmc4671_writeInt(0, TMC4671_MOTOR_TYPE_N_POLE_PAIRS, 0x00030001);
tmc4671_writeInt(0, TMC4671_PWM_POLARITIES, 0x00000000);
tmc4671_writeInt(0, TMC4671_PWM_MAXCNT, 0x00000F9F);
tmc4671_writeInt(0, TMC4671_PWM_BBM_H_BBM_L, 0x00001919);
tmc4671_writeInt(0, TMC4671_PWM_SV_CHOP, 0x00000007);

// ADC configuration
tmc4671_writeInt(0, TMC4671_ADC_I_SELECT, 0x18000100);
tmc4671_writeInt(0, TMC4671_dsADC_MCFG_B_MCFG_A, 0x00100010);
tmc4671_writeInt(0, TMC4671_dsADC_MCLK_A, 0x20000000);
tmc4671_writeInt(0, TMC4671_dsADC_MCLK_B, 0x00000000);
tmc4671_writeInt(0, TMC4671_dsADC_MDEC_B_MDEC_A, 0x014E014E);
tmc4671_writeInt(0, TMC4671_ADC_I0_SCALE_OFFSET, 0x01005D80);
tmc4671_writeInt(0, TMC4671_ADC_I1_SCALE_OFFSET, 0x00FB5E32);

// Open loop settings
tmc4671_writeInt(0, TMC4671_OPENLOOP_MODE, 0x00000000);
tmc4671_writeInt(0, TMC4671_OPENLOOP_ACCELERATION, 0x0000003C);
tmc4671_writeInt(0, TMC4671_OPENLOOP_VELOCITY_TARGET, 0x00000064);

// Feedback selection
tmc4671_writeInt(0, TMC4671_PHI_E_SELECTION, 0x00000002);
tmc4671_writeInt(0, TMC4671_UQ_UD_EXT, 0x00000FA0);

// ===== Open loop test drive =====

// Switch to open loop velocity mode
tmc4671_writeInt(0, TMC4671_MODE_RAMP_MODE_MOTION, 0x00000008);

// Rotate right
tmc4671_writeInt(0, TMC4671_OPENLOOP_VELOCITY_TARGET, 0x0000003C);
wait(2000);

// Rotate left
tmc4671_writeInt(0, TMC4671_OPENLOOP_VELOCITY_TARGET, 0xFFFFFFC4);
wait(4000);

// Stop
tmc4671_writeInt(0, TMC4671_OPENLOOP_VELOCITY_TARGET, 0x00000000);
wait(2000);
tmc4671_writeInt(0, TMC4671_UQ_UD_EXT, 0x00000000);


--------------------------------------------------------------------------

// second time got it:


// use TMC4671 API
#include "hal/ic/TMC4671.h"

// Motor type &  PWM configuration
tmc4671_writeInt(0, TMC4671_MOTOR_TYPE_N_POLE_PAIRS, 0x00030001);
tmc4671_writeInt(0, TMC4671_PWM_POLARITIES, 0x00000000);
tmc4671_writeInt(0, TMC4671_PWM_MAXCNT, 0x00000F9F);
tmc4671_writeInt(0, TMC4671_PWM_BBM_H_BBM_L, 0x00000505);
tmc4671_writeInt(0, TMC4671_PWM_SV_CHOP, 0x00000007);

// ADC configuration
tmc4671_writeInt(0, TMC4671_ADC_I_SELECT, 0x18000100);
tmc4671_writeInt(0, TMC4671_dsADC_MCFG_B_MCFG_A, 0x00100010);
tmc4671_writeInt(0, TMC4671_dsADC_MCLK_A, 0x20000000);
tmc4671_writeInt(0, TMC4671_dsADC_MCLK_B, 0x00000000);
tmc4671_writeInt(0, TMC4671_dsADC_MDEC_B_MDEC_A, 0x014E014E);
tmc4671_writeInt(0, TMC4671_ADC_I0_SCALE_OFFSET, 0x01005CFF);
tmc4671_writeInt(0, TMC4671_ADC_I1_SCALE_OFFSET, 0x01005DB4);

// Open loop settings
tmc4671_writeInt(0, TMC4671_OPENLOOP_MODE, 0x00000000);
tmc4671_writeInt(0, TMC4671_OPENLOOP_ACCELERATION, 0x0000003C);
tmc4671_writeInt(0, TMC4671_OPENLOOP_VELOCITY_TARGET, 0x00000064);

// Feedback selection
tmc4671_writeInt(0, TMC4671_PHI_E_SELECTION, 0x00000002);
tmc4671_writeInt(0, TMC4671_UQ_UD_EXT, 0x00000FA0);

// ===== Open loop test drive =====

// Switch to open loop velocity mode
tmc4671_writeInt(0, TMC4671_MODE_RAMP_MODE_MOTION, 0x00000008);

// Rotate right
tmc4671_writeInt(0, TMC4671_OPENLOOP_VELOCITY_TARGET, 0x0000003C);
wait(2000);

// Rotate left
tmc4671_writeInt(0, TMC4671_OPENLOOP_VELOCITY_TARGET, 0xFFFFFFC4);
wait(4000);

// Stop
tmc4671_writeInt(0, TMC4671_OPENLOOP_VELOCITY_TARGET, 0x00000000);
wait(2000);
tmc4671_writeInt(0, TMC4671_UQ_UD_EXT, 0x00000000);