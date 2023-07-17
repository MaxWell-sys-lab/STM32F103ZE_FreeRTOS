#ifndef _SYSTEM_PIN_H_
#define _SYSTEM_PIN_H_

#define LED_1_Pin   PB5
#define LED_2_Pin   PE5

#define KEY_2_Pin   PE2
#define KEY_1_Pin   PE3
#define KEY_0_Pin   PE4
#define KEY_UP_Pin  PA0

#define KEY_LEFT_Pin    KEY_2_Pin
#define KEY_RIGHT_Pin   KEY_0_Pin
#define KEY_DOWN_Pin    KEY_1_Pin

// ==============================================
// 以下为原理图MCU上引脚定义

// ===============  PA端口  =====================
#define WK_UP_Pin       	PA0
#define STM_ADC_Pin     	PA1
#define USART_2_TX_Pin   	PA2
#define USART_2_RX_Pin   	PA3
#define STM_DAC_Pin     	PA4
#define SPI_1_SCK_Pin    	PA5
#define SPI_1_MISO_Pin   	PA6
#define SPI_1_MOSI_Pin   	PA7
#define OV_VSYNC_Pin    	PA8
#define USART_1_TX_Pin   	PA9
#define USART_1_RX_Pin   	PA10
#define USB_DM_Pin      	PA11
#define USB_DP_Pin      	PA12
#define JTMS_Pin        	PA13
#define JTCK_Pin        	PA14
#define JTDI_Pin        	PA15

#define GBC_KEY_Pin     	STM_DAC_Pin
#define VS_SCK_Pin      	SPI_1_SCK_Pin
#define VS_MISO_Pin     	SPI_1_MISO_Pin
#define VS_MOSI_Pin     	SPI_1_MOSI_Pin
#define PWM_DAC_Pin     	OV_VSYNC_Pin
#define GBC_LED_Pin			JTDI_Pin
// ==============================================



// ===============  PB端口  =====================
#define LCD_BL_Pin			PB0
#define T_SCK_Pin			PB1
#define BOOT_1_Pin			PB2
#define JTDO_Pin			PB3
#define JTRST_Pin			PB4
#define LED_0_Pin			PB5
#define IIC_SCL_Pin			PB6
#define IIC_SDA_Pin			PB7
#define BEEP_Pin			PB8
#define REMOTE_IN_Pin		PB9
#define USART_3_TX_Pin		PB10
#define USART_3_RX_Pin		PB11
#define F_CS_Pin			PB12
#define SPI_2_SCK_Pin		PB13
#define SPI_2_MISO_Pin		PB14
#define SPI_2_MOSI_Pin		PB15

#define T_MISO_Pin			BOOT_1_Pin
#define FIFO_WEN_Pin		JTDO_Pin
#define FIFO_RCLK_Pin		JTRST_Pin
// ==============================================



// ===============  PC端口  =====================
#define OV_D0_Pin		PC0
#define OV_D1_Pin		PC1
#define OV_D2_Pin		PC2
#define OV_D3_Pin		PC3
#define OV_D4_Pin		PC4
#define OV_D5_Pin		PC5
#define OV_D6_Pin		PC6
#define OV_D7_Pin		PC7
#define SDIO_D0_Pin		PC8
#define SDIO_D1_Pin		PC9
#define SDIO_D2_Pin		PC10
#define SDIO_D3_Pin		PC11
#define SDIO_SCK_Pin	PC12
#define VS_DREQ_Pin		PC13
// ==============================================



// ===============  PD端口  =====================
#define FSMC_D2_Pin		PD0
#define FSMC_D3_Pin		PD1
#define SDIO_CMD_Pin	PD2
#define OV_SCL_Pin		PD3
#define FSMC_NOE_Pin	PD4
#define FSMC_NWE_Pin	PD5
#define FIFO_WRST_Pin	PD6
#define DM9000_RST_Pin	PD7
#define FSMC_D13_Pin	PD8
#define FSMC_D14_Pin	PD9
#define FSMC_D15_Pin	PD10
#define FSMC_A16_Pin	PD11
#define FSMC_A17_Pin	PD12
#define FSMC_A18_Pin	PD13
#define FSMC_D0_Pin		PD14
#define FSMC_D1_Pin		PD15


#define JOY_CLK_Pin		OV_SCL_Pin
#define RS485_RE_Pin	DM9000_RST_Pin
// ==============================================



// ===============  PE端口  =====================
#define FSMC_NBL0_Pin	PE0
#define FSMC_NBL1_Pin	PE1
#define KEY_2_Pin		PE2
#define KEY_1_Pin		PE3
#define KEY_0_Pin		PE4
#define LED_1_Pin		PE5
#define VS_RST_Pin		PE6
#define FSMC_D4_Pin		PE7
#define FSMC_D5_Pin		PE8
#define FSMC_D6_Pin		PE9
#define FSMC_D7_Pin		PE10
#define FSMC_D8_Pin		PE11
#define FSMC_D9_Pin		PE12
#define FSMC_D10_Pin	PE13
#define FSMC_D11_Pin	PE14
#define FSMC_D12_Pin	PE15
// ==============================================



// ===============  PF端口  =====================
#define FSMC_A0_Pin		PF0
#define FSMC_A1_Pin		PF1
#define FSMC_A2_Pin		PF2
#define FSMC_A3_Pin		PF3
#define FSMC_A4_Pin		PF4
#define FSMC_A5_Pin		PF5
#define VS_XDCS_Pin		PF6
#define VS_XCS_Pin		PF7
#define LIGHT_SENSOR_Pin	PF8
#define T_MOSI_Pin		PF9
#define T_PEN_Pin		PF10
#define T_CS_Pin		PF11
#define FSMC_A6_Pin		PF12
#define FSMC_A7_Pin		PF13
#define FSMC_A8_Pin		PF14
#define FSMC_A9_Pin		PF15
// ==============================================



// ===============  PG端口  =====================
#define FSMC_A10_Pin		PG0
#define FSMC_A11_Pin		PG1
#define FSMC_A12_Pin		PG2
#define FSMC_A13_Pin		PG3
#define FSMC_A14_Pin		PG4
#define FSMC_A15_Pin		PG5
#define NRF_IRQ_Pin			PG6
#define NRF_CS_Pin			PG7
#define NRF_CE_Pin			PG8
#define FSMC_NE_2_Pin		PG9
#define FSMC_NE_3_Pin		PG10
#define ONE_WIRE_DQ_Pin		PG11
#define FSMC_NE_4_Pin		PG12
#define OV_SDA_Pin			PG13
#define FIFO_RRST_Pin		PG14
#define FIFO_OE_Pin			PG15

#define DM9000_INT_Pin		NRF_IRQ_Pin
// ==============================================

#endif